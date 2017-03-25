/*===============*\
| BINDINGS HEADER |
\*===============*/

#ifndef _BINDINGS_H_
#define _BINDINGS_H_

//Main
int sqUpdate(HSQUIRRELVM v);
int sqFileExists(HSQUIRRELVM v);
int sqGetOS(HSQUIRRELVM v);
int sqGetTicks(HSQUIRRELVM v);
int sqImport(HSQUIRRELVM v);

//Graphics
int sqWait(HSQUIRRELVM v);
int sqClearScreen(HSQUIRRELVM v);
int sqSetDrawTarget(HSQUIRRELVM v);
int sqDrawImage(HSQUIRRELVM v);
int sqSetDrawColor(HSQUIRRELVM v);
int sqUpdateScreen(HSQUIRRELVM v);
int sqSetBackgroundColor(HSQUIRRELVM v);
int sqLoadImage(HSQUIRRELVM v);
int sqLoadImageKeyed(HSQUIRRELVM v);
int sqSetScalingFilter(HSQUIRRELVM v);

//Sprites
int sqNewSprite(HSQUIRRELVM v);
int sqDrawSprite(HSQUIRRELVM v);
int sqDrawSpriteEx(HSQUIRRELVM v);

//Input
int sqUpdateInput(HSQUIRRELVM v);
int sqKeyPress(HSQUIRRELVM v);
int sqKeyRelease(HSQUIRRELVM v);
int sqKeyDown(HSQUIRRELVM v);
int sqResetDrawTarget(HSQUIRRELVM v);
int sqLoadImage(HSQUIRRELVM v);
int sqDrawImage(HSQUIRRELVM v);
int sqMouseX(HSQUIRRELVM v);
int sqMouseY(HSQUIRRELVM v);

//Maths
int sqRandomFloat(HSQUIRRELVM v);
int sqRandomInt(HSQUIRRELVM v);
int sqDistance2(HSQUIRRELVM v);
int sqWrap(HSQUIRRELVM v);
int sqFloor(HSQUIRRELVM v);
int sqPointAngle(HSQUIRRELVM v);

//Text
int sqDrawText(HSQUIRRELVM v);
int sqOpenFont(HSQUIRRELVM v);
int sqCloseFont(HSQUIRRELVM v);

#endif