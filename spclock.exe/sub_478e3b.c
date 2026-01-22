// 函数: sub_478e3b
// 地址: 0x478e3b
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg3 + (arg5 << 1)) += arg2:1.b
*arg1
*arg1 += arg3:1.b
bool p = unimplemented  {add byte [eax], ch}

if (p)
    jump(0x478e43)

arg3.b = 0x47
*(arg1 - 1) += arg2.b
char* entry_ebx
*entry_ebx += (arg1 - 1).b
arg3.b = 0x47 + *(arg1 - 1 + (arg5 << 2))
arg1[0xb00eb005] = sbb.b(arg1[0xb00eb005], arg2:1.b, 0x47 + *(arg1 - 1 + (arg5 << 2)) u< 0x47)
bool c_1 = unimplemented  {sbb byte [eax-0x4ff14ffa], dh}
char temp4 = arg2:1.b
char temp5 = arg1[0xb013b023]
arg2:1.b = adc.b(temp4, temp5, c_1)
void* eax
eax.b = adc.b((arg1 - 1).b, 0xb0, 
    adc.b(temp4, temp5, c_1) u< temp4 || (c_1 && adc.b(temp4, temp5, c_1) == temp4))
int32_t eflags
__out_dx_oeax(arg2, eax, eflags)
undefined
