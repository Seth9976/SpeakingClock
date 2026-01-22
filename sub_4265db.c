// 函数: sub_4265db
// 地址: 0x4265db
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg6 -= 1
*arg1 += arg1.b
char temp1 = *(arg6 + 0x65)
*(arg6 + 0x65) += arg1.b
int32_t entry_result
int32_t** esp

if (temp1 != neg.b(arg1.b))
    int32_t eflags
    uint16_t* esi = __outsd(arg2, *arg5, arg5, eflags)
    __outsb(arg2, *esi, esi, eflags)
    int32_t esi_2 = *(arg6 + (arg4 << 1) + 0x72) * 0x6f666e49
    *((arg3 + 1) * 3 + 0x53) += arg1.b
    char* var_4_1 = arg1
    *(arg4 - 0x75) += arg2.b
    arg1.b = __in_al_dx(arg2, eflags)
    int32_t entry_result_1 = entry_result
    int32_t var_19_1 = esi_2
    int32_t* var_1d = arg6
    esp = &var_1d
    int32_t* esi_3 = arg4[3]
    
    if (data_4b1a2e != 0)
        entry_result = 0
        
        if (arg4[2] == 0x12340042 && esi_3 != 0 && *esi_3 u>= 0x28)
            esp = &var_1d
            
            if (SystemParametersInfoA(SPI_GETWORKAREA, 0, &arg4[-4], 0) != 0)
                esi_3[1] = 0
                esi_3[2] = 0
                esi_3[3] = data_4b1a00(0)
                esi_3[4] = data_4b1a00(1)
                esi_3[5] = arg4[-4]
                int32_t* edi_3 = &esi_3[6]
                void* esi_5 = &arg4[-3]
                *edi_3 = *esi_5
                int32_t* edi_4 = &edi_3[1]
                void* esi_6 = esi_5 + 4
                *edi_4 = *esi_6
                edi_4[1] = *(esi_6 + 4)
                esp = &var_1d
                esi_3[9] = 1
                
                if (*esi_3 u>= 0x48)
                    lstrcpyA(&esi_3[0xa], sub_4266af+0x15)
                    esp = &var_1d
                
                entry_result.b = 1
    else
        arg1.b = 6
        struct _EXCEPTION_REGISTRATION_RECORD** eax
        int32_t edi_1
        eax, arg4, edi_1 = sub_426124(arg1.b, data_4b1a18, sub_4266af+5)
        data_4b1a18 = eax
        esp = &var_1d
        entry_result = data_4b1a18(edi_1, esi_3)

*esp
esp[1]
esp[2]
*arg4
return entry_result
