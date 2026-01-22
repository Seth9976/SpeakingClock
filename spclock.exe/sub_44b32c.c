// 函数: sub_44b32c
// 地址: 0x44b32c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
sub_451060(data_4b1c34, arg1)
int32_t eax_1 = arg1[0x19]

if (eax_1 != 0)
    sub_44e82c(eax_1)
    arg1[0x19] = 0

while (sub_44e490(arg1) s> 0)
    sub_403c68(sub_44e4a0(arg1, 0))

if (arg1[0xd] != 0)
    sub_44b79c(arg1, nullptr)
    DestroyMenu(arg1[0xd])

sub_403c68(arg1[0x17])
sub_40eb14(&arg1[0x11])
sub_40eb14(&arg1[0x1e])
int16_t eax_11 = arg1[0x14].w

if (eax_11 != 0)
    sub_41a624(data_4b1c3c, zx.d(eax_11), 0)

int32_t* eax_13 = arg1[0x13]

if (eax_13 != 0)
    sub_403c68(eax_13)

int32_t edx_3
edx_3.b = arg2.b & 0xfc
int32_t result = sub_423380(arg1, edx_3)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
