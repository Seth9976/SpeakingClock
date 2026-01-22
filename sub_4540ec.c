// 函数: sub_4540ec
// 地址: 0x4540ec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
*(data_4ab860 + 0x1b4) = arg1

if (IsWindowUnicode(arg1) == 0)
    SetWindowLongA(arg1, 0xfffffffc, *(data_4ab860 + 0x1c0))
    
    if ((GetWindowLongA(arg1, 0xfffffff0) & 0x40000000) != 0
            && GetWindowLongA(arg1, 0xfffffff4) == 0)
        SetWindowLongA(arg1, 0xfffffff4, arg1)
else
    SetWindowLongW(arg1, 0xfffffffc, *(data_4ab860 + 0x1c0))
    
    if ((GetWindowLongW(arg1, 0xfffffff0) & 0x40000000) != 0
            && GetWindowLongW(arg1, 0xfffffff4) == 0)
        SetWindowLongW(arg1, 0xfffffff4, arg1)

SetPropA(arg1, zx.d(data_4b1c56), data_4ab860)
SetPropA(arg1, zx.d(data_4b1c54), data_4ab860)
int32_t eax_27 = data_4ab860
data_4ab860 = 0
return (*(eax_27 + 0x1c0))(arg1, arg2, arg3, arg4)
