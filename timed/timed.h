﻿// timed.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once


#include "include/source_location.hpp"

namespace std {
	using nostd::source_location;
}

// TODO: 在此处引用程序需要的其他标头。
// 吸氧大法(对程序优化性能)
/*
#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-fwhole-program")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-fstrict-overflow")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-skip-blocks")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("-funsafe-loop-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")
#pragma G++ optimize(1)
#pragma G++ optimize(2)
#pragma G++ optimize(3)
#pragma G++ optimize("Ofast")
#pragma G++ optimize("inline")
#pragma G++ optimize("-fgcse")
#pragma G++ optimize("-fgcse-lm")
#pragma G++ optimize("-fipa-sra")
#pragma G++ optimize("-ftree-pre")
#pragma G++ optimize("-ftree-vrp")
#pragma G++ optimize("-fpeephole2")
#pragma G++ optimize("-ffast-math")
#pragma G++ optimize("-fsched-spec")
#pragma G++ optimize("unroll-loops")
#pragma G++ optimize("-falign-jumps")
#pragma G++ optimize("-falign-loops")
#pragma G++ optimize("-falign-labels")
#pragma G++ optimize("-fdevirtualize")
#pragma G++ optimize("-fcaller-saves")
#pragma G++ optimize("-fcrossjumping")
#pragma G++ optimize("-fthread-jumps")
#pragma G++ optimize("-funroll-loops")
#pragma G++ optimize("-fwhole-program")
#pragma G++ optimize("-freorder-blocks")
#pragma G++ optimize("-fschedule-insns")
#pragma G++ optimize("inline-functions")
#pragma G++ optimize("-ftree-tail-merge")
#pragma G++ optimize("-fschedule-insns2")
#pragma G++ optimize("-fstrict-aliasing")
#pragma G++ optimize("-fstrict-overflow")
#pragma G++ optimize("-falign-functions")
#pragma G++ optimize("-fcse-skip-blocks")
#pragma G++ optimize("-fcse-follow-jumps")
#pragma G++ optimize("-fsched-interblock")
#pragma G++ optimize("-fpartial-inlining")
#pragma G++ optimize("no-stack-protector")
#pragma G++ optimize("-freorder-functions")
#pragma G++ optimize("-findirect-inlining")
#pragma G++ optimize("-frerun-cse-after-loop")
#pragma G++ optimize("inline-small-functions")
#pragma G++ optimize("-finline-small-functions")
#pragma G++ optimize("-ftree-switch-conversion")
#pragma G++ optimize("-foptimize-sibling-calls")
#pragma G++ optimize("-fexpensive-optimizations")
#pragma G++ optimize("-funsafe-loop-optimizations")
#pragma G++ optimize("inline-functions-called-once")
#pragma G++ optimize("-fdelete-null-pointer-checks")
*/