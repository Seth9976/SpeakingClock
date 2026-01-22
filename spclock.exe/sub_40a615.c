// 函数: sub_40a615
// 地址: 0x40a615
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_40a5af(arg1, arg2)
char* esi
sub_40a5a6(esi)
int16_t eax
eax:1.b = *(arg1 - 5)
*arg2 = eax
void* edi = &arg2[2]
int32_t i = *(arg1 + 0xc) - 1

do
    *edi = sub_40a5a6(esi).b
    edi += 1
    i -= 1
while (i != 0)

int32_t eax_1
eax_1:1.b = 0x2b
int32_t ecx_1 = *(arg1 + 8)

if (ecx_1 u> 4)
    ecx_1 = 0

eax_1.b = 0x45
int32_t ebx
ebx.b = *(arg1 - 0x29)
return sub_40a46c(eax_1, sx.d(*(arg1 - 0x2c)) - 1, ecx_1, edi)
