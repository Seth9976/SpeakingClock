// 函数: sub_41dc68
// 地址: 0x41dc68
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = arg3
bool var_d

if (*(ebx + 0x42) == 0)
    var_d = true
else
    char var_110[0x103]
    sub_404e24(&var_110, arg1, 0xff)
    *arg4 = sub_403eec(*arg2, &var_110)
    arg4[1] = arg2
    var_d = *arg4 == 0
    ebx[0x11]
    ebx[0x10](&var_d, arg4)

if (var_d != 0)
    arg4[1] = arg2
    *arg4 = (*(*ebx + 0x1c))()
