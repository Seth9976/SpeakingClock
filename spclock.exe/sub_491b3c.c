// 函数: sub_491b3c
// 地址: 0x491b3c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_10 = arg3

if (arg2 == *(arg1 + 0x4c))
    return 

if ((*(arg1 + 0x1c) & 0x10) != 0)
    *(arg1 + 0x4c) = arg2
    return 

if (*(arg1 + 0x48) != 0)
    if (arg2 != 0)
        enum HOT_KEY_MODIFIERS fsModifiers = 0
        sub_44a944(arg2, &var_10:2, &var_10)
        
        if ((var_10.b & 4) != 0)
            fsModifiers = MOD_CONTROL
        
        if ((var_10.b & 2) != 0)
            fsModifiers |= MOD_ALT
        
        if ((var_10.b & 1) != 0)
            fsModifiers |= MOD_SHIFT
        
        RegisterHotKey(*(arg1 + 0x58), zx.d(*(arg1 + 0x4a)), fsModifiers, zx.d(var_10:2.w))
    else if (*(arg1 + 0x4c) != 0)
        UnregisterHotKey(*(arg1 + 0x58), zx.d(*(arg1 + 0x4a)))

*(arg1 + 0x4c) = arg2
