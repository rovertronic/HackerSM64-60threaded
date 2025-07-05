#include "types.h"

#ifndef FRAME_LERP_H
#define FRAME_LERP_H

extern u32 gFrameLerpRenderFrame;
extern f32 gFrameLerpDeltaTime;
extern f32 gDeltaProgress;

enum enumFrameLerpRenderFrame {
    FRAMELERP_NORMAL,
    FRAMELERP_BETWEEN,
    FRAMELERP_SLOW
};

f32 * frameLerpPos(Vec3f pos, Vec3f lerpValue);
f32 * frameLerpRot(Quat rot, Quat rotValue);
f32 frameLerpFloat(f32 f, f32 lerpValue);

#endif