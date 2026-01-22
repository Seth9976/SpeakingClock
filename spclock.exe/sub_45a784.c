// 函数: sub_45a784
// 地址: 0x45a784
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
sub_4235e8(arg1)

if (arg1[0x77].b != 0)
    arg1[0x77].b = 0
    sub_4550dc(arg1, 0)

sub_406550(&arg1[0x6c])
sub_403c68(arg1[0x6b])

if (arg1[0xc] != 0)
    sub_45b570(arg1, 1)

if (arg1[0x6d] != 0)
    (*(*arg1 + 0xb4))()

for (int32_t i = sub_45b7f4(arg1); i != 0; i = sub_45b7f4(arg1))
    int32_t* eax_9 = sub_45b7b8(arg1, i - 1)
    sub_45b5dc(arg1, eax_9)
    int32_t edx_5
    edx_5.b = 1
    (*(*eax_9 - 4))()

sub_403c68(arg1[0x69])
void* eax_15 = arg1[0x70]

if (eax_15 != 0)
    sub_424aac(eax_15)

sub_403c68(arg1[0x68])
int32_t edx_6
edx_6.b = arg2.b & 0xfc
int32_t result = sub_456730(arg1, edx_6)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
