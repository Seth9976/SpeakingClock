// 函数: sub_46bb84
// 地址: 0x46bb84
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 != data_4aba38 && arg1 != *(data_4b1ce0 + 0x30) && IsWindowVisible(arg1) != 0
        && IsWindowEnabled(arg1) != 0)
    if ((GetWindowLongA(arg1, 0xffffffec) & 8) != 0)
        if (data_4aba40 == 0)
            data_4aba40 = arg1
    else if (data_4aba3c == 0)
        data_4aba3c = arg1

return 0xffffffff
