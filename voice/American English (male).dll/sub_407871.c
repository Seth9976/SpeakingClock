// 函数: sub_407871
// 地址: 0x407871
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

sub_40780b(arg1, arg2)
char* esi
sub_407802(esi)
int16_t eax
eax:1.b = *(arg1 - 5)
*arg2 = eax
void* edi = &arg2[2]
int32_t i = *(arg1 + 0xc) - 1

do
    *edi = sub_407802(esi)
    edi += 1
    i -= 1
while (i != 0)

return sub_40788e(arg1) __tailcall
