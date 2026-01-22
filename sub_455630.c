// 函数: sub_455630
// 地址: 0x455630
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

data_4b1c68 = arg1
*(data_4b1c68 + 8) = 0
GetCursorPos(&data_4b1c74)
void* eax_1 = data_4b1c68
*(eax_1 + 0x10) = data_4b1c74
*(eax_1 + 0x14) = data_4b1c78
data_4b1c7c = GetCursor()
data_4b1c70 = sub_454810((data_4b1c68).w)
data_4b1c80 = arg3
int32_t var_14
int32_t var_10

if (sub_403df4(arg1, &data_4517f4) != 0)
    int32_t ecx = arg1[0x13]
    
    if (arg1[0x15] - ecx s<= 0)
        arg1[0xa] = 0
        arg1[0xb] = 0
    else
        var_14 = arg1[4] - ecx
        var_10 = arg1[0x15] - arg1[0x13]
        *(arg1 + 0x28) = fconvert.d(float.t(var_14) / float.t(var_10))
    
    int32_t edx_3 = arg1[0x14]
    
    if (arg1[0x16] - edx_3 s<= 0)
        arg1[0xc] = 0
        arg1[0xd] = 0
    else
        var_14 = arg1[5] - edx_3
        var_10 = arg1[0x16] - arg1[0x14]
        *(arg1 + 0x30) = fconvert.d(float.t(var_14) / float.t(var_10))
    
    if (arg2 == 0)
        data_4b1c84 = 0
    else
        data_4b1c84 = 2
        (*(*arg1 + 0x30))(var_14, var_10)
else if (arg2 == 0)
    data_4b1c84 = 0
else
    data_4b1c84 = 1

int32_t eax_10
int32_t ecx_6
int32_t edx_8
eax_10, edx_8, ecx_6 = (*(*data_4b1c68 + 8))(var_14, var_10)
data_4b1c88 = eax_10

if (data_4b1c88 != 0)
    int32_t eax_11 = data_4b1c78
    HWND eax_12 = GetDesktopWindow()
    ecx_6 = data_4b1c74
    sub_4617c0(ecx_6, eax_12, data_4b1c88, eax_11)

edx_8.b = 1
HCURSOR result = sub_403c38(ecx_6, edx_8)
data_4b1c90 = result

if (data_4b1c84 == 0)
    return result

return sub_455348(&data_4b1c74)
