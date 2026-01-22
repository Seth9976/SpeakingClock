// 函数: sub_426437
// 地址: 0x426437
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax
char* eax_1
char ecx
int16_t edx_1
eax_1, edx_1, ecx = (*eax)()
*eax_1 += eax_1.b
*(arg1 + 0x6f) += ecx
int32_t eflags
__outsb(edx_1, *arg2, arg2, eflags)
uint16_t* esi_1 = *(arg3 + (arg1 << 1) + 0x72) * 0x6d6f7246
char* var_4 = eax_1
void* esi_2 = __outsd(edx_1, *esi_1, esi_1, eflags)
int32_t var_8 = 0
int32_t* ebp_1 = &var_8
void* var_20 = esi_2
int32_t var_24 = arg3
int32_t result

if (data_4b1a2c != 0)
    result = 0
    int32_t pvParam
    
    if (__return_addr == 0x12340042 && arg4 != 0 && *arg4 u>= 0x28
            && SystemParametersInfoA(SPI_GETWORKAREA, 0, &pvParam, 0) != 0)
        arg4[1] = 0
        arg4[2] = 0
        arg4[3] = data_4b1a00(0)
        arg4[4] = data_4b1a00(1)
        arg4[5] = pvParam
        void* edi_3 = &arg4[6]
        void var_14
        void* esi_4 = &var_14
        *edi_3 = *esi_4
        void* edi_4 = edi_3 + 4
        void* esi_5 = esi_4 + 4
        *edi_4 = *esi_5
        *(edi_4 + 4) = *(esi_5 + 4)
        arg4[9] = 1
        
        if (*arg4 u>= 0x48)
            lstrcpyA(&arg4[0xa], sub_426507+0x15)
        
        result.b = 1
else
    eax_1.b = 4
    struct _EXCEPTION_REGISTRATION_RECORD** eax_2
    int32_t edi_1
    eax_2, ebp_1, edi_1 = sub_426124(eax_1.b, data_4b1a10, sub_426507+5)
    data_4b1a10 = eax_2
    result = data_4b1a10(edi_1, arg4)

*ebp_1
return result
