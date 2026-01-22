// 函数: sub_44524c
// 地址: 0x44524c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 == 0x110)
    sub_445198(arg1)
    *(data_4ab524 + 0x3c) = arg1
    *(data_4ab524 + 0x34) = SetWindowLongA(arg1, 0xfffffffc, *(data_4ab524 + 0x44))
    CallWindowProcA(*(data_4ab524 + 0x44), arg1, arg2, arg3, arg4)
    data_4ab524 = 0

return 0
