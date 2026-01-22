// 函数: sub_495954
// 地址: 0x495954
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
int32_t* eax = arg1[9]

if (eax != 0)
    sub_403c68(eax)
    arg1[9] = 0

int32_t* eax_1 = arg1[6]
eax_1[2] = 0
eax_1[3] = 0
sub_403c68(eax_1)
int32_t edx
edx.b = arg2.b & 0xfc
int32_t result = sub_41a6e0(arg1, edx)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
