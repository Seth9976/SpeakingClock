// 函数: sub_42573c
// 地址: 0x42573c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg1.b &= 0x22
bool p = unimplemented  {and al, 0x22}
void* const entry_ebx
void** esp

if (p)
    *arg5
    int16_t ds
    uint32_t var_4_1 = zx.d(ds)
    *(entry_ebx - 0x46)
    int32_t eflags
    void* eax
    eax.b = __salc(eflags)
    int32_t temp2_1 = *(eax - 0x7b)
    arg1 = divu.dp.d(arg2:eax, temp2_1)
    arg2 = modu.dp.d(arg2:eax, temp2_1)
    int32_t* var_8 = arg4
    arg4 = &var_8
    void* const var_3c_1 = entry_ebx
    int32_t esi
    int32_t var_40_1 = esi
    void* var_44 = &arg5[1]
    esp = &var_44
    entry_ebx = nullptr
    int32_t var_38_1 = 0

arg4[-1] = entry_ebx
arg4[-3] = arg2
arg4[-2] = arg1
*(esp - 4) = arg4
*(esp - 8) = j_sub_40443c
TEB* fsbase
*(esp - 0xc) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp - 0xc

if (arg3 != 0)
    arg3, arg2 = sub_404bdc(arg4[-2] + 0x20, arg3)

if (*(*(arg4[-2] + 0x10) + 8) s<= 0)
    *(esp - 4)
    fsbase->NtTib.ExceptionList = *(esp - 0xc)
    *(esp - 4) = sub_4259ea
    sub_404b88(&arg4[-0xc])
    sub_404b88(&arg4[-1])
    return &arg4[-1]

arg2.b = 1
int32_t eax_6
int32_t ecx
eax_6, ecx = sub_403c38(arg3, arg2)
arg4[-8] = eax_6
*(esp - 0x10) = arg4
*(esp - 0x14) = j_sub_40443c
*(esp - 0x18) = fsbase->NtTib.ExceptionList
void* esp_6 = esp - 0x18
fsbase->NtTib.ExceptionList = esp_6
int32_t eax_10 = *(*(arg4[-2] + 0x10) + 8) - 1
int32_t edx_1

if (eax_10 s>= 0)
    arg4[-9] = eax_10 + 1
    arg4[-4] = 0
    int32_t i
    
    do
        void* eax_14 = sub_41a0f4(*(arg4[-2] + 0x10), arg4[-4])
        arg4[-3]
        int32_t eax_16
        eax_16, edx_1, ecx = (*(**(eax_14 + 4) + 0x10))()
        
        if (eax_16 s> 0)
            ecx, edx_1 = sub_419f9c(arg4[-8], eax_14)
        
        arg4[-4] += 1
        i = arg4[-9]
        arg4[-9] -= 1
    while (i != 1)

int32_t eax_19 = *(arg4[-8] + 8)

if (eax_19 != 0)
    if (eax_19 != 1)
        edx_1.b = 1
        arg4[-6] = sub_403c38(ecx, edx_1)
        *(esp_6 - 4) = arg4
        *(esp_6 - 8) = j_sub_40443c
        *(esp_6 - 0xc) = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = esp_6 - 0xc
        int32_t eax_33 = *(arg4[-8] + 8) - 1
        
        if (eax_33 s>= 0)
            arg4[-9] = eax_33 + 1
            arg4[-4] = 0
            int32_t i_1
            
            do
                int32_t* eax_37 = *(sub_41a0f4(arg4[-8], arg4[-4]) + 4)
                arg4[-3]
                arg4[-7] = (*(*eax_37 + 0x14))()
                
                if (arg4[-7] != 0)
                    *(esp_6 - 0x10) = arg4
                    *(esp_6 - 0x14) = j_sub_40443c
                    *(esp_6 - 0x18) = fsbase->NtTib.ExceptionList
                    fsbase->NtTib.ExceptionList = esp_6 - 0x18
                    int32_t esi_2 = (*(*arg4[-7] + 0x14))() - 1
                    
                    if (esi_2 s>= 0)
                        int32_t j_1 = esi_2 + 1
                        arg4[-5] = 0
                        int32_t j
                        
                        do
                            arg4[-5]
                            (*(*arg4[-7] + 0xc))()
                            arg4[-0xc]
                            (*(*arg4[-6] + 0x3c))()
                            arg4[-5] += 1
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                    
                    *(esp_6 - 0x10)
                    fsbase->NtTib.ExceptionList = *(esp_6 - 0x18)
                    *(esp_6 - 0x10) = 0x42590d
                    return sub_403c68(arg4[-7])
                
                arg4[-4] += 1
                i_1 = arg4[-9]
                arg4[-9] -= 1
            while (i_1 != 1)
        
        if (*(arg4[-2] + 0xc) == 0)
            void* eax_55 = (*(*arg4[-6] + 0x18))()
            (*(*arg4[-6] + 0xc))()
            arg4[-1]
            (*(**(eax_55 + 4) + 0x20))()
        else
            (*(*arg4[-6] + 0x90))()
            arg4[-6]
            
            if ((*(**(arg4[-2] + 0xc) + 0xc))() s>= 0)
                void* eax_51 = (*(*arg4[-6] + 0x18))()
                (*(*arg4[-6] + 0xc))()
                arg4[-1]
                (*(**(eax_51 + 4) + 0x20))()
        
        *(esp_6 - 4)
        fsbase->NtTib.ExceptionList = *(esp_6 - 0xc)
        *(esp_6 - 4) = 0x4259a8
        return sub_403c68(arg4[-6])
    
    int32_t* eax_28 = *(sub_41a0f4(arg4[-8], 0) + 4)
    arg4[-3]
    (*(*eax_28 + 0x20))()
else
    arg4[-0xb] = sub_405018(arg4[-3])
    arg4[-0xa].b = 6
    *(esp_6 - 4) = &arg4[-0xb]
    *(esp_6 - 8) = 0
    edx_1.b = 1
    int32_t eax_24
    eax_24, arg4 = sub_40cfa8(0x424f58, edx_1, 0x4251d8)
    sub_40451c(eax_24)

*(esp_6 + 8)
fsbase->NtTib.ExceptionList = *esp_6
*(esp_6 + 8) = 0x4259c5
return sub_403c68(arg4[-8])
