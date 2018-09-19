# reflecs
Reflecs is an entity component system implemented in C99. It has zero dependencies, and has a footprint of around 30Kb. Its key features are:
- Simple API that uses native types and functions for components and systems
- High performance due to efficient memory design
- Job scheduler for running system workloads in parallel
- Periodic, reactive and on-demand systems

## Overview
The following code shows a simple reflecs application:

```c
typedef struct Vector2D {
    float x;
    float y;
} Vector2D;

typedef Vector2D Position;
typedef Vector2D Velocity;

void Move(void *data[], EcsInfo *info) {
    Position *position = data[0];
    Velocity *velocity = data[1];
    position->x += velocity->x * info->delta_time;
    position->y += velocity->y * info->delta_time;
}

void main(int argc, char *argv[]) {
    EcsWorld *world = ecs_init();

    ECS_COMPONENT(world, Position);
    ECS_COMPONENT(world, Velocity);
    ECS_SYSTEM(world, Move, EcsPeriodic, Position, Velocity);

    EcsHandle e = ecs_new(world);
    ecs_stage(world, e, Position_h);
    ecs_stage(world, e, Velocity_h);
    ecs_commit(world, e);

    while (true) {
        ecs_progress(world);
    }

    ecs_fini(world);
}
```
