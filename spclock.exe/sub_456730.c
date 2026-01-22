// 函数: sub_456730
// 地址: 0x456730
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
sub_4755f8(*data_4ac2fc, arg1)
void* eax_2 = arg1[0x25]

if (eax_2 == 0 || (*(eax_2 + 0x1c) & 8) != 0)
    (*(*arg1 + 0x6c))()
else
    sub_423648(eax_2, arg1)
    sub_458ac8(arg1[0x25], arg1)
    (*(*arg1 + 0x6c))()
    void var_1c
    sub_4570f0(arg1, &var_1c)
    int32_t esi
    esi.w = 0xffcc
    sub_403e64(arg1, esi, 0xffffffff, &var_1c)
    arg1[0x25] = 0

sub_403c68(arg1[0x1b])
arg1[0x1b] = 0
sub_403c68(arg1[0x1d])
sub_403c68(arg1[0x1a])
sub_409eec(arg1[0x19])
sub_403c68(arg1[0x1e])
int32_t edx_6
edx_6.b = arg2.b & 0xfc
int32_t result = sub_423380(arg1, edx_6)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
