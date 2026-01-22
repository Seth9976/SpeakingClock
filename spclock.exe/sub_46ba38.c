// 函数: sub_46ba38
// 地址: 0x46ba38
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 != data_4aba38 && IsWindowVisible(arg1) != 0 && IsWindowEnabled(arg1) != 0)
    int32_t* eax_3 = sub_402ea8(8)
    *eax_3 = data_4aba48
    eax_3[1] = arg1
    data_4aba48 = eax_3
    EnableWindow(arg1, 0)

return 0xffffffff
