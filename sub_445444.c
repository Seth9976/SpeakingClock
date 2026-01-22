// 函数: sub_445444
// 地址: 0x445444
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

LRESULT result = sub_45c95c(arg1, arg2)

if (arg2[3] == 0 && *arg2 != 0xb021 && arg1[0x94] != 0)
    result = (*(*arg1[0x94] + 0x34))() & 0x7f
    arg2[3] = result

if (arg2[3] == 0 && *arg2 == 7 && arg1[0x95] != 0)
    result = SendMessageA(arg1[0x95], 7, arg2[1], arg2[2])
    arg2[3] = result

return result
