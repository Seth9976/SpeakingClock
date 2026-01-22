// 函数: sub_40bba0
// 地址: 0x40bba0
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

if (arg3 != 0x400)
    return E_NOTIMPL

enum VARENUM vt_1
vt_1.w = arg5
enum VARENUM vt = vt_1
vt_1.w = arg4
return VariantChangeType(arg1, arg2, vt_1.w, vt)
