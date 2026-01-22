// 函数: sub_431be0
// 地址: 0x431be0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* esi = arg1[0xa]
void* result

if (*(esi + 0x3c) != 1 || *(esi + 0x3e) != 1)
    result = nullptr
else
    result.b = 1

if (arg2 == result.b)
    return result

sub_430e98(arg1)
void var_60
__builtin_memcpy(&var_60, esi + 0x18, 0x54)
int32_t var_48_1 = 0
uint16_t eax_1 = zx.w(arg2)
uint16_t var_3c_1 = eax_1
uint16_t var_3a_1 = eax_1
uint16_t var_50_1 = eax_1
uint16_t var_4e_1 = eax_1
sub_4307b8(*(esi + 0x10), *(esi + 8), arg1, &var_60)
return (*(*arg1 + 0x10))()
