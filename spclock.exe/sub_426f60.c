// 函数: sub_426f60
// 地址: 0x426f60
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
*arg1 += arg1.b
char temp1 = *arg1
*arg1 += arg1.b
void* const __return_addr_1 = __return_addr
void* eax_2
int16_t entry_ebx

if (not(add_overflow(temp1, arg1.b)))
    *__return_addr_1 += __return_addr_1.b
    *__return_addr_1 += __return_addr_1.b
    *__return_addr_1 += __return_addr_1.b
    *__return_addr_1 += __return_addr_1.b
    *__return_addr_1 += __return_addr_1.b
    *__return_addr_1 += __return_addr_1.b
    *(__return_addr_1 + 0x70) += __return_addr_1.b
    arg2 += 1
    *(__return_addr_1 * 2) += __return_addr_1.b
    *((arg5 << 1) + 0x3eb00041) += entry_ebx.b
    arg5[arg4 + 0x3ec00040] += entry_ebx:1.b
    eax_2 = __return_addr_1 + 2
    goto label_426f93

while (true)
    arg2.b = 0x41
    char temp2_1 = *__return_addr_1
    *__return_addr_1 += entry_ebx:1.b
    int32_t eax_4
    int16_t es_1
    eax_4, es_1 = __les_gprz_memp(*arg3)
    int32_t eflags
    uint8_t temp0_1
    temp0_1, arg5 = __insb(arg5, arg2.w, eflags)
    *arg5 = temp0_1
    char* result
    int16_t es_2
    result, es_2 = __les_gprz_memp(*arg3)
    
    if (not(add_overflow(temp2_1, entry_ebx:1.b)))
        void arg_45
        *(&arg_45 + (result << 3)) += arg2:1.b
        arg5[(arg4 << 2) - 0x3a13ffbf] += (arg3 + 1):1.b
        result[0xffffffc6] += (arg3 + 2).b
        arg5[result << 3] += entry_ebx.b
        *(arg4 + (arg5 << 2) + 0x41) += entry_ebx:1.b
        result[0xffffffc7] += entry_ebx.b
        result.b += entry_ebx.b
        *(arg3 + 5) = sub_41c1dc
        result.b = __in_al_dx(arg2.w, eflags)
        *(arg3 + 5) = rol.d(*(arg3 + 5), 8)
        arg2.b = 0x41
        result[0xc80041c2] += (arg3 + 5).b
        return result
    
    char temp3_1 = *result
    *result += result.b
    result.b = sbb.b(result.b, 0x7d, temp3_1 + result.b u< temp3_1)
    arg3 += 1
    result[0xbc00403e] += arg2:1.b
    void* eax_1
    eax_1.b = (&result[1]).b * 2
    eax_2 = eax_1 + 1
label_426f93:
    eax_2:1.b += eax_2.b
    *(eax_2 + 0x403f) += entry_ebx:1.b
    int32_t arg_4
    *(&arg_4 + arg5) += entry_ebx.b
    *(eax_2 + 0x7f) += arg3:1.b
    __return_addr_1.b = (eax_2 + 2).b + (arg2 + 1):1.b
    *arg4 - *arg5
    arg4 += 4
    arg5 = &arg5[4]
    arg3 += 1
    __return_addr_1.b += arg3:1.b
    entry_ebx.b = 0x41
    __return_addr_1.b *= 2
