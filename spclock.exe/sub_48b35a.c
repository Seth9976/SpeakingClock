// 函数: sub_48b35a
// 地址: 0x48b35a
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char temp1_1 = *arg1
*arg1 += arg1.b
bool c_5 = temp1_1 + arg1.b u< temp1_1
bool o_1 = add_overflow(temp1_1, arg1.b)
char* result
int32_t eax
void* esp

if (temp1_1 != neg.b(arg1.b) && not(c_5))
    bool c_1 = unimplemented  {sbb eax, 0x7400004b}
    eax:1.b = adc.b(sbb.d(arg1, 0x7400004b, c_5):1.b, *(arg3 + &data_4b1d7c), c_1)
label_48b3d7:
    *(esp - 4) = eax
    esp -= 4
label_48b3d8:
    FreeLibrary()
    esp += 4
label_48b3dd:
    result = nullptr
label_48b3df:
    data_4b1d7c = result
label_48b3e4:
    result = nullptr
    goto label_48b3e6

int32_t ExceptionList
int32_t ExceptionList_1 = ExceptionList
result = arg7
void arg_20
esp = &arg_20
bool cond:0_1

if (o_1)
    if (temp1_1 + arg1.b s< 0 == o_1)
        char temp5_1 = *result
        *result += result.b
        cond:0_1 = temp5_1 == neg.b(result.b)
    label_48b3d0:
        
        if (cond:0_1)
            goto label_48b3e4
        
        eax = data_4b1d7c
        goto label_48b3d7
    
    *result = ExceptionList_1
else
    int32_t eflags
    uint8_t* edi_2
    uint8_t temp0_1
    temp0_1, edi_2 = __insb(__return_addr, ExceptionList_1.w, eflags)
    *edi_2 = temp0_1
    uint8_t* edi_3
    uint8_t temp0_2
    temp0_2, edi_3 = __insb(edi_2, ExceptionList_1.w, eflags)
    *edi_3 = temp0_2
    char temp3_1 = *result
    *result += result.b
    bool c = temp3_1 + result.b u< temp3_1
    int32_t arg_21
    esp = &arg_21
    
    if (&arg_20 != 0xffffffff && not(c))
        goto label_48b3d8
    
    TEB* fsbase
    
    if (not(c))
        arg7 = &arg_21
        arg6 = j_sub_40443c
        ExceptionList = fsbase->NtTib.ExceptionList
        esp = &ExceptionList:1
        fsbase->NtTib.ExceptionList = &ExceptionList:1
        int32_t temp7_1 = data_4b1d78
        data_4b1d78 += 1
        
        if (temp7_1 != 0xffffffff)
            goto label_48b3e4
        
        cond:0_1 = data_4b1d7c == 0
        goto label_48b3d0
    
    uint16_t* esi_2 = __outsd(ExceptionList_1.w, *arg4, arg4, eflags)
    int16_t* edi_4
    int16_t temp0_3
    temp0_3, edi_4 = __insd(edi_3, ExceptionList_1.w, eflags)
    *edi_4 = temp0_3
    char* edx
    
    if (add_overflow(arg6, 0xffffffff))
        result = sbb.d(result, 0xc033004b, c)
    label_48b3e6:
        edx = *esp
        *(esp + 8)
        esp += 0xc
        *(fsbase + result) = edx
    else
        if (not(c))
            goto label_48b3dd
        
        if (arg6 == 1)
            goto label_48b3df
        
        uint16_t* esi_3 = __outsd(ExceptionList_1.w, *esi_2, esi_2, eflags)
        uint16_t* esi_4 = __outsb(ExceptionList_1.w, *esi_3, esi_3, eflags)
        __outsb(ExceptionList_1.w, *esi_4, esi_4, eflags)
        int32_t edi_5 = arg_21
        edx = arg11
        char* result_1
        result = result_1
        __bound_gprv_mema32(arg9, *(arg9 + 0x64))
        char temp8_1 = *(edi_5 + (arg8 << 1) + 0x6d)
        *(edi_5 + (arg8 << 1) + 0x6d) += result.b
        result_1 = arg10
        esp = &result_1
        
        if (temp8_1 != neg.b(result.b))
            *(arg8 + 0x64)
            
            if (temp8_1 != neg.b(result.b))
                *(edx + 0x75)
                *(edi_5 + (arg8 << 1) + 0x6d) += result.b
                
                if (edi_5 == 0xffffffff)
                    undefined
                
                jump("indowAttribute")
            
            *result += result.b
            *result += result.b
            *result += result.b
            *result += result.b
            *result += result.b
            result.b = 0xb4
            *(result - 1) += (result - 1).b
            *(result - 1) += (result - 1).b
            *(result - 1) += (result - 1).b
            *(result - 1) += (result - 1).b
            *(result - 1) += (result - 1).b
            *(result - 1) += (result - 1).b
            void arg_640085
            *(&arg_640085 + (arg8 << 2)) += edx.b
            *(result - 1) += (result - 1).b
            *(result - 1) |= arg10.b
            int32_t* ecx_4 = arg12 - 1
            void* eax_1
            eax_1.b = (result - 1).b * 2
            *edx
            char* esp_4 = 0xfc00403e
            void* eax_4
            char* edi_7
            
            while (true)
                void* eax_2 = eax_1 ^ *edx
                int16_t es_1
                edi_7, es_1 = __les_gprz_memp(*arg8)
                *(eax_2 + 0x403f) += arg10:1.b
                *(esp_4 + edi_7) += arg10.b
                eax_4:1.b = 0x48
                *edi_7 += (ecx_4 + 1).b
                ecx_4 += 2
                *0xdff090ff += ecx_4.b
                void* edx_1
                edx_1:1.b = 0x48
                *(edi_7 + arg8 + 0x38a40042) += ecx_4:1.b
                eax_4.b = 0x48 + arg10.b
                *(edx_1 + 1)
                esp_4 = 0xb4004237
                char temp0_4
                char temp1
                temp0_4, temp1, eflags = __aaa(eax_4.b, 0x48, eflags)
                eax_4.b = temp0_4
                eax_4:1.b = temp1
                edx = edx_1 + 2
                eax_4.b += eax_4:1.b
                
                if (eax_4.b != *edx)
                    break
                
                eax_1:1.b = (eax_4 + 1):1.b + arg10:1.b
            
            char temp11 = *(eax_4 - 1)
            *(eax_4 - 1) += edx.b
            *ecx_4 = sbb.d(*ecx_4, ecx_4, temp11 + edx.b u< temp11)
            int32_t esp_5 = *0xb4004237
            *(eax_4 - 0x4a) += (eax_4 - 1):1.b
            *(eax_4 - 0xfffb74b) += (eax_4 - 2).b
            *(eax_4 - 2 + (edi_7 << 2)) += 0x48
            *(eax_4 - 0x4b) += edx.b
            char temp12 = *(esp_5 + (edx << 1))
            *(esp_5 + (edx << 1)) += edx.b
            *(esp_5 - 4) = edi_7
            __outsb(edx.w, *arg8, arg8, eflags)
            *(esp_5 - 8) = eax_4 - 4
            
            if (temp12 + edx.b u< temp12)
                jump(sub_48b4e8+0x26)
            
            jump("cComponen")
        
        *(arg10 + &data_4b1d7c)
        *(arg10 + &data_4b1d7c) <<= 0x33
        bool c_2 = unimplemented  {shl byte [ebx+0x4b1d7c], 0x33}
        edx[0x59] = rrc.b(edx[0x59], 0x59, c_2)
        *(fsbase + result) = edx
*(esp - 4) = sub_48b3f9
return result
