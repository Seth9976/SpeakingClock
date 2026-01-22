// 函数: sub_41ac9c
// 地址: 0x41ac9c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
arg1[3] = 1

if (arg1[2] != 0)
    sub_41adb4(arg1)

int32_t ecx
ecx.b = 1
int32_t* esi_1 = sub_41aa08(arg1)
sub_403c68(esi_1[2])
int32_t edx_1
edx_1.b = arg2.b & 0xfc
int32_t result = sub_41a6e0(esi_1, edx_1)

if (arg2.b s<= 0)
    return result

return sub_40401c(esi_1)
