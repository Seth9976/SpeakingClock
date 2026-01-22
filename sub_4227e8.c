// 函数: sub_4227e8
// 地址: 0x4227e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_c = arg3
int32_t eax = arg2

if (eax != 0)
    eax = *(eax - 4)

var_c = eax

if (var_c s> 0xff)
    var_c = 0xff

sub_420654(arg1, &var_c, 1)
return sub_420654(arg1, sub_405018(arg2), var_c)
