// 函数: sub_426eac
// 地址: 0x426eac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int16_t cs
uint32_t var_4 = zx.d(cs)
int32_t temp1 = *(arg1 + (arg3 << 1) + 0x61) | arg2
*(arg1 + (arg3 << 1) + 0x61) = temp1
int32_t eflags
int32_t entry_ebx

if (temp1 u< 0)
    char* temp3_1 = arg3
    arg3 -= 1
    
    if (temp3_1 != 1)
        int16_t* edi
        int16_t temp0
        temp0, edi = __insd(arg5, arg2.w, eflags)
        *edi = temp0
        arg1.b = arg1.b
        *arg1 += arg1.b
        *arg1 = &arg1[*arg1]
        *arg1 += arg1.b
        *arg1 += arg1.b
        char temp4 = arg1[0x426ecc]
        arg1[0x426ecc] += arg2.b
        *arg2 = adc.d(*arg2, arg1, temp4 + arg2.b u< temp4)
        arg1.b ^= 4
        *arg1 += arg1.b
        *arg1 += arg1.b
        *arg1 += arg1.b
        entry_ebx:1.b *= 2
        undefined

*(arg4 + arg5 + 0x3ec00040) += entry_ebx:1.b
void* eax
eax:1.b = (&arg1[1]):1.b + (&arg1[1]).b
*(eax + 0x403f) += entry_ebx:1.b
*(&var_4 + arg5) += entry_ebx.b
char temp2 = *(eax - 0x3ffbd82)
*(eax - 0x3ffbd82) += arg3.b
bool o = add_overflow(temp2, arg3.b)

if (temp2 + arg3.b s< 0 != o)
    if (o)
        jump(sub_426f60+0x61)
    
    jump(sub_426f60+0x1f)

*arg4 += arg3.b
*(eax + 2) += (eax + 2).b
*(eax + 2) += (eax + 2).b
*arg3 += (eax + 2).b
*(eax + 2) += (eax + 2).b
void* eax_2
eax_2.b = (eax + 2).b + arg3.b
__outsb(arg2.w, *arg4, arg4, eflags)
*(eax_2 * 2) += eax_2.b
*eax_2 += eax_2.b

if (((arg2 + 1) | *(entry_ebx + ((arg2 + 1) << 1) + 0x74)) u< 0)
    jump(sub_426f60+0x5d)

jump(0x426f54)
