// 函数: sub_445e84
// 地址: 0x445e84
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx

if (arg2 == 0x110)
    *(data_4ab524 + 0x3c) = arg1
    *(data_4ab524 + 0x34) = SetWindowLongA(arg1, 0xfffffffc, *(data_4ab524 + 0x44))
    CallWindowProcA(*(data_4ab524 + 0x44), arg1, arg2, arg3, arg4)
    data_4ab524 = 0
else if (arg2 == 0x4e && *(arg4 + 8) == 0xfffffda7)
    sub_445198(GetWindowLongA(arg1, 0xfffffff8))

return 0
