// 函数: sub_450600
// 地址: 0x450600
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg1

if (sub_44fa98(arg3) == 0)
    return GetMenuStringA(arg2, arg1, arg6, arg5, arg4)

var_8 = 0

if ((GetMenuState(arg2, arg1, arg4) & 0x10) == 0)
    if (GetMenuItemID(arg2, arg1) != 0xffffffff)
        sub_44f914(arg3)
        var_8 = 0
else
    HMENU eax_4
    int32_t ecx
    eax_4, ecx = GetSubMenu(arg2, arg1)
    ecx.b = 1
    sub_44f914(arg3)
    var_8 = 0

return nullptr
