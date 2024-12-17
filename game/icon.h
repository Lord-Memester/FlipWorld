#pragma once
#include "flip_world_icons.h"
#include "game.h"
#define COLLISION_BOX_PADDING_HORIZONTAL 10
#define COLLISION_BOX_PADDING_VERTICAL 12

typedef struct
{
    const Icon *icon;
    uint8_t width;
    uint8_t height;
} IconContext;

extern const EntityDescription icon_desc;
const Icon *get_icon(char *name);