// 函数: sub_44f07c
// 地址: 0x44f07c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* esp_2 = &var_4
int32_t* ebp_1 = &var_4
int32_t i_5 = 8
int32_t i

do
    *(esp_2 - 4) = 0
    *(esp_2 - 8) = 0
    esp_2 -= 8
    i = i_5
    i_5 -= 1
while (i != 1)
*(esp_2 - 4) = i_5
int32_t entry_ebx
*(esp_2 - 8) = entry_ebx
*(esp_2 - 0xc) = arg3
*(esp_2 - 0x10) = arg4
*(esp_2 - 0x14) = &var_4
*(esp_2 - 0x18) = j_sub_40443c
TEB* fsbase
*(esp_2 - 0x1c) = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = esp_2 - 0x1c
char var_2a = 0
void var_28
void* var_8

if (arg2 == 0)
    char eax_1
    
    if ((*(arg1 + 0x1c) & 0x10) == 0)
        eax_1 = sub_44f6bc(arg1)
    
    if ((*(arg1 + 0x1c) & 0x10) != 0 || eax_1 == 0)
        *(esp_2 - 0x14)
        fsbase->NtTib.ExceptionList = *(esp_2 - 0x1c)
        *(esp_2 - 0x14) = sub_44f50b
        void var_48
        sub_404bac(&var_48, 4)
        sub_404bac(&var_28, 4)
        void** result = &var_8
        sub_404b88(result)
        return result

int32_t ecx = sub_404c20(&var_8, data_4ab730)
int32_t var_10 = 0
int32_t var_18 = 0
int32_t var_30 = 0
int32_t var_c = 0
int32_t var_14 = 0
*(esp_2 - 0x20) = &var_4
*(esp_2 - 0x24) = j_sub_40443c
*(esp_2 - 0x28) = fsbase->NtTib.ExceptionList
void* esp_12 = esp_2 - 0x28
fsbase->NtTib.ExceptionList = esp_12
int32_t eax_4
int32_t ecx_1
int32_t edx_1
eax_4, ecx_1, edx_1 = sub_403c38(ecx, 1)
int32_t var_10_1 = eax_4
edx_1.b = 1
int32_t eax_6
int32_t ecx_2
int32_t edx_2
eax_6, ecx_2, edx_2 = sub_403c38(ecx_1, edx_1)
int32_t var_18_1 = eax_6
edx_2.b = 1
int32_t* eax_8
int32_t ecx_3
int32_t edx_3
eax_8, ecx_3, edx_3 = sub_403c38(ecx_2, edx_2)
edx_3.b = 1
int32_t var_c_1 = sub_403c38(ecx_3, edx_3)
int32_t eax_13 = sub_44e490(arg1) - 1

if (eax_13 s>= 0)
    int32_t i_4 = eax_13 + 1
    int32_t esi = 0
    int32_t i_1
    
    do
        char temp2_1 = *(sub_44e4a0(arg1, esi) + 0x3e)
        
        if (temp2_1 != 0)
            sub_404fb0(*(sub_44e4a0(arg1, esi) + 0x30), U"-")
            
            if (temp2_1 != 0 && *(sub_44e4a0(arg1, esi) + 0x30) != 0)
                void* var_3c
                sub_451274(*(sub_44e4a0(arg1, esi) + 0x30), &var_3c)
                int32_t var_20
                sub_408cbc(var_3c, &var_20)
                
                if (var_20 != 0)
                    if (sub_40dc14(var_20, data_4ab730) != 0)
                        *(esp_12 - 4) = &var_4
                        char eax_34 = sub_44ee48()
                        *(esp_12 - 4)
                        
                        if (eax_34 == 0)
                            *(esp_12 - 4) = sub_44e4a0(arg1, esi) + 0x30
                            int64_t* var_40
                            sub_451184(*(sub_44e4a0(arg1, esi) + 0x30), &var_40)
                            sub_404bdc(*(esp_12 - 4), var_40)
                            *(esp_12 - 4) = sub_44e4a0(arg1, esi)
                            *(sub_44e4a0(arg1, esi) + 0x30)
                            (*(*eax_8 + 0x64))()
                else
                    *(esp_12 - 4) = sub_44e4a0(arg1, esi)
                    *(sub_44e4a0(arg1, esi) + 0x30)
                    (*(*eax_8 + 0x64))()
        
        esi += 1
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

sub_404c20(&var_28, var_8)
void* esp_18 = esp_12 + 0x2c
int32_t eax_50 = (*(*eax_8 + 0x14))() - 1

if (eax_50 s>= 0)
    int32_t var_38_1 = eax_50 + 1
    int32_t i_2
    
    do
        sub_404c20(&ebp_1[-1], ebp_1[-9])
        ebp_1[-0xb]
        (*(*ebp_1[-5] + 8))()
        (*(*ebp_1[-3] + 0x44))()
        int32_t j = (*(*ebp_1[-5] + 0x14))() - 1
        
        if (j s>= 0)
            do
                (*(*ebp_1[-5] + 0xc))()
                
                for (struct _EXCEPTION_REGISTRATION_RECORD* k = 1; k s<= sub_404e48(ebp_1[-8]); 
                        k = &k->Next + 1)
                    if (not(test_bit(*data_4ac4c4, zx.d(*(ebp_1[-8] + k - 1)))))
                        *(esp_18 - 4) = &ebp_1[-0x10]
                        sub_405080(1, k, ebp_1[-8])
                        sub_408cbc(ebp_1[-0x10], &ebp_1[-7])
                        *(esp_18 - 4) = ebp_1
                        ebp_1[-7]
                        char eax_65 = sub_44ee48()
                        *(esp_18 - 4)
                        
                        if (eax_65 != 0)
                            if (*(data_4ac4e0 + 0xc) == 0)
                                sub_405108(0x44f52c, &ebp_1[-8], k)
                            else
                                ebp_1 = sub_44eefc(&ebp_1[-8], ebp_1[-7], k)
                            
                            (*(*ebp_1[-5] + 0x18))()
                            ebp_1[-8]
                            (*(*ebp_1[-3] + 0x3c))()
                            (*(*ebp_1[-5] + 0x48))()
                            break
                    else
                        k = &k->Next + 1
                
                j -= 1
            while (j != 0xffffffff)
        
        if ((*(*ebp_1[-3] + 0x14))() s> ebp_1[-4])
            *(esp_18 - 4) = ebp_1
            sub_44ee78()
            *(esp_18 - 4)
        
        if ((*(*ebp_1[-5] + 0x14))() s<= 0)
            break
        
        int32_t edi_3 = (*(*ebp_1[-5] + 0x14))() - 1
        
        if (edi_3 s>= 0)
            int32_t j_2 = edi_3 + 1
            int32_t esi_2 = 0
            int32_t j_1
            
            do
                (*(*ebp_1[-5] + 0x18))()
                (*(*ebp_1[-0xb] + 0x5c))()
                (*(*ebp_1[-0xb] + 0x14))()
                (*(*ebp_1[-0xb] + 0x70))()
                esi_2 += 1
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
        
        i_2 = ebp_1[-0xd]
        ebp_1[-0xd] -= 1
    while (i_2 != 1)

if (ebp_1[-4] == 0)
    *(esp_18 - 4) = ebp_1
    sub_44ee78()
    *(esp_18 - 4)

*(ebp_1 - 0x26) = (*(*ebp_1[-2] + 0x14))() s> 0
int32_t eax_91 = (*(*ebp_1[-2] + 0x14))() - 1

if (eax_91 s>= 0)
    ebp_1[-0xd] = eax_91 + 1
    int32_t esi_3 = 0
    int32_t i_3
    
    do
        (*(*ebp_1[-2] + 0xc))()
        
        if (*(data_4ac4e0 + 0xc) != 0 && sub_40dc14(0x44f52c, ebp_1[-8]) == 0 && ebp_1[-6] != 0
                && sub_40dc14(0x44f52c, ebp_1[-8]) == 0)
            int32_t ebx_6 = ebp_1[-6]
            
            if (ebx_6 != 0)
                ebx_6 = *(ebx_6 - 4)
            
            *(esp_18 - 4) = &ebp_1[-0x11]
            sub_405080(1, ebx_6, ebp_1[-6])
            ebp_1 = sub_44eefc(&ebp_1[-8], ebp_1[-0x11], nullptr)
            int32_t eax_100 = ebp_1[-6]
            
            if (eax_100 != 0)
                eax_100 = *(eax_100 - 4)
            
            sub_4050c0(&ebp_1[-6], eax_100, 1)
        
        sub_404bdc((*(*ebp_1[-2] + 0x18))() + 0x30, ebp_1[-8])
        esi_3 += 1
        i_3 = ebp_1[-0xd]
        ebp_1[-0xd] -= 1
    while (i_3 != 1)

*(esp_18 + 8)
fsbase->NtTib.ExceptionList = *esp_18
*(esp_18 + 8) = 0x44f4d4
sub_403c68(ebp_1[-2])
sub_403c68(ebp_1[-0xb])
sub_403c68(ebp_1[-5])
return sub_403c68(ebp_1[-3])
