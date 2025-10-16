#pragma once



// --------------------------------- Vectore 2 ---------------------------------
typedef struct { float x, y; } Vec2;

static inline Vec2 vec2_init(float x, float y) {Vec2 v = {x, y}; return v;}
static inline Vec2 vec2_add (Vec2 v1, Vec2 v2) {return vec2_init(v1.x + v2.x, v1.y + v2.y);}
static inline Vec2 vec2_sub (Vec2 v1, Vec2 v2) {return vec2_init(v1.x - v2.x, v1.y - v2.y);}
static inline Vec2 vec2_mul (Vec2 v1, Vec2 v2) {return vec2_init(v1.x * v2.x, v1.y * v2.y);}
static inline Vec2 vec2_div (Vec2 v1, Vec2 v2) {return vec2_init(v1.x / v2.x, v1.y / v2.y);}


// --------------------------------- Vectore 3 ---------------------------------
typedef struct { float x, y, z; } Vec3;

static inline Vec3 vec3_init(float x, float y, float z) {Vec3 v = {x, y, z}; return v;}
static inline Vec3 vec3_add (Vec3 v1, Vec3 v2) {return vec3_init(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);}
static inline Vec3 vec3_sub (Vec3 v1, Vec3 v2) {return vec3_init(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);}
static inline Vec3 vec3_mul (Vec3 v1, Vec3 v2) {return vec3_init(v1.x * v2.x, v1.y * v2.y, v1.z * v2.z);}
static inline Vec3 vec3_div (Vec3 v1, Vec3 v2) {return vec3_init(v1.x / v2.x, v1.y / v2.y, v1.z / v2.z);}


// --------------------------------- Vectore 4 ---------------------------------
typedef struct { float x, y, z, w; } Vec4;

static inline Vec4 vec4_init(float x, float y, float z, float w) {Vec4 v = {x, y, z, w}; return v;}
static inline Vec4 vec4_add (Vec4 v1, Vec4 v2) {return vec4_init(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z, v1.w + v2.w);}
static inline Vec4 vec4_sub (Vec4 v1, Vec4 v2) {return vec4_init(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z, v1.w - v2.w);}
static inline Vec4 vec4_mul (Vec4 v1, Vec4 v2) {return vec4_init(v1.x * v2.x, v1.y * v2.y, v1.z * v2.z, v1.w * v2.w);}
static inline Vec4 vec4_div (Vec4 v1, Vec4 v2) {return vec4_init(v1.x / v2.x, v1.y / v2.y, v1.z / v2.z, v1.w / v2.w);}