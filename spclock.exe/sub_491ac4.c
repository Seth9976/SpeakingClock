// 函数: sub_491ac4
// 地址: 0x491ac4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_c = arg3

if (arg2.b == *(arg1 + 0x48))
    return 

*(arg1 + 0x48) = arg2.b

if ((*(arg1 + 0x1c) & 0x10) != 0)
    return 

if (arg2.b != 0)
    enum HOT_KEY_MODIFIERS fsModifiers = 0
    sub_44a944(*(arg1 + 0x4c), &var_c:2, &var_c)
    
    if ((var_c.b & 4) != 0)
        fsModifiers = MOD_CONTROL
    
    if ((var_c.b & 2) != 0)
        fsModifiers |= MOD_ALT
    
    if ((var_c.b & 1) != 0)
        fsModifiers |= MOD_SHIFT
    
    RegisterHotKey(*(arg1 + 0x58), zx.d(*(arg1 + 0x4a)), fsModifiers, zx.d(var_c:2.w))
else if (*(arg1 + 0x4c) != 0)
    UnregisterHotKey(*(arg1 + 0x58), zx.d(*(arg1 + 0x4a)))
