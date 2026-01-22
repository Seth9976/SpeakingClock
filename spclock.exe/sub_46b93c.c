// 函数: sub_46b93c
// 地址: 0x46b93c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_10 = arg3
var_10.b = arg3.b
int32_t result = GetWindowLongA(arg1, 0xffffffec)
int32_t result_1 = result

if (arg2 != 0 && (result_1 & 0x40000) == 0)
label_46b978:
    BOOL eax_1 = IsIconic(arg1)
    var_10:2.b = (sbb.d(eax_1, eax_1, eax_1 u< 1)).b + 1
    BOOL eax_4 = IsWindowVisible(arg1)
    var_10:1.b = (sbb.d(eax_4, eax_4, eax_4 u< 1)).b + 1
    
    if ((var_10:1.b | var_10:2.b) != 0)
        ShowWindow(arg1, SW_HIDE)
    
    if (arg2 == 0)
        SetWindowLongA(arg1, 0xffffffec, result_1 & 0xfffbffff)
    else
        SetWindowLongA(arg1, 0xffffffec, result_1 | 0x40000)
    
    result.b = var_10.b & var_10:1.b
    
    if (result.b != 0 || var_10:2.b != 0)
        if (var_10:2.b == 0)
            return ShowWindow(arg1, SW_SHOW)
        
        return ShowWindow(arg1, SW_MINIMIZE)
else if (arg2 == 0)
    result = result_1 & 0x40000
    
    if (result == 0x40000)
        goto label_46b978

return result
