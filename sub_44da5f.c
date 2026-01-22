// 函数: sub_44da5f
// 地址: 0x44da5f
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
*0x1000000 += arg3:1.b
*arg1 += arg1.b
*(arg4 - 0x75) += arg2.b
int32_t eflags
arg1.b = __in_al_dx(arg2.w, eflags)
arg4[-4] = *arg3
void* edi_1 = &arg4[-3]
void* esi_1 = &arg3[1]
*edi_1 = *esi_1
void* edi_2 = edi_1 + 4
void* esi_2 = esi_1 + 4
*edi_2 = *esi_2
void* esi_3 = esi_2 + 4
*(edi_2 + 4) = *esi_3
void* esi_4 = esi_3 + 4
arg4[-5] = arg2
arg4[-6] = arg1
arg4[-0xc] = sub_44ea50(arg4[-6])
arg4[-0xb] = sub_44dc14(arg4[-6])
int32_t eax_3
eax_3.b = (arg4[3].b & 1) != 0
*(arg4 - 0x33) = eax_3.b
void* eax_4

if (*data_4ac120 s> 4 || (*data_4ac120 == 4 && *data_4ac358 s> 0))
    eax_4.b = 1
else
    eax_4 = nullptr

*(arg4 - 0x55) = eax_4.b
void* eax_7

if (*data_4ac120 s<= 4 || *data_4ac4d0 != 2)
    eax_7 = nullptr
else
    eax_7.b = 1

*(arg4 - 0x56) = eax_7.b
*(arg4 - 0x49) = sub_40d704(5, 1)
void* eax_9

if (*(arg4 - 0x49) != 0)
    eax_9 = sub_4659bc()

if (*(arg4 - 0x49) == 0 || *(eax_9 + 5) == 0)
    *(arg4 - 0x4a) = 0
else
    int32_t eax_12 = (*data_4ac0bc)(0, 0x3e9)
    *(arg4 - 0x4a) = (sbb.d(eax_12, eax_12, eax_12 u< 1)).b + 1

void* result

if (arg4[-0xc] == 0 || (*(arg4[-0xc] + 0x40) == 0 && arg4[-0xb] == 0)
        || (*(arg4[-6] + 0x9a) == 0 && *(arg4[-6] + 0x92) == 0))
    int32_t ebx_2 = 0
    void* edx_2 = nullptr
    *(arg4 - 0x57) = sub_40d704(6, 0)
    
    if (*(arg4 - 0x57) != 0)
        void* eax_24
        int32_t edx_3
        eax_24, edx_3 = sub_4659bc()
        edx_3.b = 7
        int32_t eax_25
        eax_25, edx_2 = sub_465a84(eax_24, edx_3)
        ebx_2 = eax_25
    
    if (ebx_2 == 0)
        char eax_29
        
        if (arg4[-0xc] != 0)
            eax_29 = sub_4502d0(arg4[-0xc])
        
        if (arg4[-0xc] == 0 || eax_29 != 0)
            result = sub_44d0d4(esi_4, arg4)
        else
            result = sub_44c75c(esi_4, arg4)
    else
        int32_t* var_68_2 = arg4
        char eax_27
        
        if (arg4[-0xc] != 0)
            eax_27, edx_2 = sub_4502d0(arg4[-0xc])
        
        if (arg4[-0xc] != 0 && eax_27 != 0)
            eax_27 = 1
        else
            eax_27 = 0
        
        result = sub_44be08(eax_27, edx_2)
else
    arg4[-5]
    (*(*arg4[-6] + 0x34))(zx.d(*(arg4 - 0x33)))
    result = arg4[-6]
    
    if (*(result + 0x9a) != 0)
        void* ebx_1 = arg4[-6]
        arg4[-5]
        arg4[-6]
        *(ebx_1 + 0x9c)
        result = (*(ebx_1 + 0x98))(zx.d(arg4[3].w), &arg4[-4])

*arg4
return result
