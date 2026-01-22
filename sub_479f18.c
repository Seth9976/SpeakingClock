// 函数: sub_479f18
// 地址: 0x479f18
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
sub_403c68(arg1[1])
int32_t ecx = sub_479f74(arg1)

if (data_4abbe4 != 0 && sub_479e7c(data_4abbe4) != 0)
    ecx = sub_403c68(data_4abbe4)
    data_4abbe4 = 0

int32_t edx
edx.b = arg2.b & 0xfc
int32_t result = sub_403c58(ecx, edx)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
