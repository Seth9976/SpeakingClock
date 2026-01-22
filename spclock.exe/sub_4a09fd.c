// 函数: sub_4a09fd
// 地址: 0x4a09fd
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
arg1[0x74] += arg3
int32_t eflags
int16_t* edi
int16_t temp0
temp0, edi = __insd(arg5, arg2, eflags)
*edi = temp0
uint8_t* edi_1
uint8_t temp0_1
temp0_1, edi_1 = __insb(edi, arg2, eflags)
*edi_1 = temp0_1
uint8_t* edi_2
uint8_t temp0_2
temp0_2, edi_2 = __insb(edi_1, arg2, eflags)
*edi_2 = temp0_2
void* result
int32_t* esp
TEB* fsbase

if (add_overflow(arg1, 0xffffffff))
    *(arg4 - 0x75) += arg2.b
    void* eax_2
    eax_2.b = __in_al_dx(arg2, eflags)
    void* var_4_2 = arg4
    int32_t (* var_8_1)(void* arg1, void* arg2) = j_sub_40443c
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    esp = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t temp2_1 = data_4b1de0
    data_4b1de0 += 1
    
    if (temp2_1 == 0xffffffff)
        sub_4a0a18()
    
    result = nullptr
else
    *(arg1 - 1) += (arg1 - 1).b
    arg1[0x73] += arg3
    int16_t* edi_3
    int16_t temp0_3
    temp0_3, edi_3 = __insd(edi_2, arg2, eflags)
    *edi_3 = temp0_3
    uint8_t* edi_4
    uint8_t temp0_4
    temp0_4, edi_4 = __insb(edi_3, arg2, eflags)
    *edi_4 = temp0_4
    result = arg1 - 2
    uint8_t* edi_5
    uint8_t temp0_5
    temp0_5, edi_5 = __insb(edi_4, arg2, eflags)
    *edi_5 = temp0_5
    
    if (not(add_overflow(arg1 - 1, 0xffffffff)))
        *result += result.b
        void* entry_ebx
        *(entry_ebx + 0x4abe2c3d) += result.b
        char temp4 = *result
        *result += result.b
        
        if (temp4 != neg.b(result.b))
            FreeLibrary(data_4abe2c)
            data_4b1dd4 = 0
            data_4b1dd8 = 0
            data_4b1ddc = 0
            result = nullptr
            data_4abe2c = 0
        
        return result

esp[2]
*(fsbase + result) = *esp
esp[2] = sub_4a0a7f
return result
