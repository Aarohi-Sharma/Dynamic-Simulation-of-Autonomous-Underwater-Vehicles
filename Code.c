#include <stdio.h>

// Function to calculate the integral using the trapezoidal rule
float integrate(float x[], float y[], int n) {
    float sum = 0;
    for (int i = 1; i < n; i++) {
        sum += (y[i - 1] + y[i]) * (x[i] - x[i - 1]) / 2.0;
    }
    return sum;
}

void DynamicSimulation_Of_AUVs(float x1, float x2, float fluid_density, 
                                float position[3], float velocity, float mass, 
                                int simulation_time_total, int simulation_step, 
                                float position_obstacle[3], int *collision_flag) {
    
    float dx = position[0];
    float dy = position[1];
    float dz = position[2];
    float v1 = velocity;
    float g = 9.81; // gravitational acceleration
    float C = 0.5; // drag coefficient
    float A = 1.0; // cross-sectional area perpendicular to the flow
    float a; // acceleration
    float px = position_obstacle[0];
    float py = position_obstacle[1];
    float pz = position_obstacle[2];
    int t1 = simulation_time_total;
    int t2 = simulation_step;

    float Fdrag, Fbuoyancy, Fgravity, F;
    
    float Ix, Iy, Iz;
    float Lnet, Mnet, Nnet;

    for (int i = 0; i <= t1; i += t2) {
        // Update current
        printf("Enter value of current:");
        scanf("%f", &x1);
        
        // Translation motion
        Fdrag = 0.5 * C * fluid_density * A * v1 * v1;
        Fbuoyancy = fluid_density * g * mass;
        Fgravity = mass * g;
        F = Fdrag + Fbuoyancy + Fgravity;
        a = F / mass;
        v1 = v1 + a * t2;
        dx = dx + v1 * t2;
        dy = dy + v1 * t2;
        dz = dz + v1 * t2;

        // Rotation motion
        float x[] = {dx, dy, dz}; // Distance from roll axis to mass elements
        float y[] = {dx * dx + dy * dy, dy * dy + dz * dz, dx * dx + dz * dz}; // Integrand
        Ix = integrate(x, y, 3);
        Iy = integrate(x, y, 3);
        Iz = integrate(x, y, 3);

        // Collision detection
        if (dx == px || dy == py || dz == pz) {
            *collision_flag += 1;
        }
    }

    // Print final results
    printf("Final acceleration: %.2f m/s^2\n", a);
    printf("Final velocity: %.2f m/s\n", v1);
    printf("Final position (dx, dy, dz): %.2f, %.2f, %.2f\n", dx, dy, dz);

}

int main() {
    float x1 = 0.0; // Current (m/sec)
    float x2; // Temperature (°C)
    float fluid_density = 1000.0; // Fluid density (kg/m^3)
    float position[3] = {0.0, 0.0, 0.0}; // Initial position (m)
    float velocity; // Initial velocity (m/sec)
    float mass = 100.0; // Mass (kg)
    int simulation_time_total; // Total simulation time (sec)
    int simulation_step = 1; // Simulation time step (sec)
    float position_obstacle[3] = {10.0, 10.0, 10.0}; // Position of the obstacle (m)
    int collision_flag = 0; // Collision flag

    printf("Enter temperature:\n");
    scanf("%f", &x2);
    printf("Enter total simulation time in seconds:\n");
    scanf("%d", &simulation_time_total);
    printf("Enter initial velocity of AUV:\n");
    scanf("%f", &velocity);

    DynamicSimulation_Of_AUVs(x1, x2, fluid_density, position, velocity, mass, 
                                simulation_time_total, simulation_step, 
                                position_obstacle, &collision_flag);

    if (collision_flag > 0) {
        printf("Collision detected!\n");
    } else {
        printf("No collision detected.\n");
    }

    return 0;
}
