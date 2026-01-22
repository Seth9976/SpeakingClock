// 函数: sub_4508a4
// 地址: 0x4508a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_38 = ebx
int32_t esi
int32_t var_3c = esi
int32_t edi
int32_t var_40 = edi
char* var_34 = nullptr
int32_t* var_44 = &var_4
int32_t (* var_48)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax = *arg2

if (eax s> 0x111)
    if (eax == 0x117)
        int32_t ebx_4 = arg1[2] - 1
        
        if (ebx_4 s>= 0)
            int32_t i_6 = ebx_4 + 1
            int32_t edi_2 = 0
            int32_t i
            
            do
                int32_t* eax_12 = sub_41a0f4(arg1, edi_2)
                arg2[1]
                
                if (sub_44f9d0(eax_12) != 0)
                    goto label_450dc6
                
                edi_2 += 1
                i = i_6
                i_6 -= 1
            while (i != 1)
        
        goto label_450dab
    
    if (eax == 0x11f)
        char var_11_1 = 0
        
        if ((*(arg2 + 6) & 0x10) != 0)
            var_11_1 = 1
        
        int32_t ebx_6 = arg1[2] - 1
        
        if (ebx_6 s>= 0)
            int32_t i_7 = ebx_6 + 1
            int32_t edi_3 = 0
            int32_t i_1
            
            do
                if (var_11_1 != 1)
                    HMENU var_c_1 = zx.d(arg2[1].w)
                else
                    HMENU hMenu = arg2[2]
                    
                    if (hMenu == 0)
                        var_c_1 = 0xffffffff
                    else
                        esp_1 = &ExceptionList
                        var_c_1 = GetSubMenu(hMenu, zx.d(arg2[1].w))
                
                sub_44f914(sub_41a0f4(arg1, edi_3))
                int32_t var_10_1 = 0
                edi_3 += 1
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
        
        sub_477894(*data_4ac2fc, nullptr)
        goto label_450dab
    
    if (eax == 0x120)
        int32_t ebx_16 = arg1[2] - 1
        
        if (ebx_16 s< 0)
            goto label_450dab
        
        int32_t ebx_17 = ebx_16 + 1
        int32_t edi_7 = 0
        
        while (true)
            int32_t* eax_87 = sub_41a0f4(arg1, edi_7)
            int32_t eax_89
            int32_t ecx_13
            eax_89, ecx_13 = (*(*eax_87 + 0x34))()
            esp_1 = &esp_1[0x11]
            
            if (eax_89 == arg2[2])
                sub_450484(ecx_13, arg2)
                break
            
            arg2[2]
            ecx_13.b = 1
            sub_44f914(eax_87)
            edi_7 += 1
            int32_t temp11_1 = ebx_17
            ebx_17 -= 1
            
            if (temp11_1 == 1)
                goto label_450dab
    else
    label_450dab:
        *(esp_1 - 4) = arg2[2]
        *(esp_1 - 8) = arg2[1]
        *(esp_1 - 0xc) = *arg2
        *(esp_1 - 0x10) = arg1[4]
        arg2[3] = DefWindowProcA()
else
    if (eax == 0x111)
        int32_t ebx_2 = arg1[2] - 1
        
        if (ebx_2 s>= 0)
            int32_t i_5 = ebx_2 + 1
            int32_t edi_1 = 0
            int32_t i_2
            
            do
                if (sub_44f9b4(sub_41a0f4(arg1, edi_1), arg2[1].w) != 0)
                    goto label_450dc6
                
                edi_1 += 1
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        goto label_450dab
    
    if (eax == 0x2b)
        void* eax_41 = arg2[2]
        int32_t ebx_11 = arg1[2] - 1
        
        if (ebx_11 s>= 0)
            int32_t i_8 = ebx_11 + 1
            int32_t edi_5 = 0
            int32_t i_3
            
            do
                void* eax_44 = sub_41a0f4(arg1, edi_5)
                *(eax_41 + 8)
                sub_44f914(eax_44)
                int32_t* var_10_3 = nullptr
                edi_5 += 1
                i_3 = i_8
                i_8 -= 1
            while (i_3 != 1)
        
        goto label_450dab
    
    if (eax == 0x2c)
        void* eax_63 = arg2[2]
        int32_t ebx_13 = arg1[2] - 1
        
        if (ebx_13 s>= 0)
            int32_t i_9 = ebx_13 + 1
            int32_t edi_6 = 0
            int32_t i_4
            
            do
                void* eax_66 = sub_41a0f4(arg1, edi_6)
                *(eax_63 + 8)
                sub_44f914(eax_66)
                int32_t* var_10_4 = nullptr
                edi_6 += 1
                i_4 = i_9
                i_9 -= 1
            while (i_4 != 1)
        
        goto label_450dab
    
    if (eax != 0x53)
        goto label_450dab
    
    void* eax_24 = arg2[2]
    int32_t ebx_8 = arg1[2] - 1
    
    if (ebx_8 s< 0)
        goto label_450dab
    
    int32_t ebx_9 = ebx_8 + 1
    int32_t edi_4 = 0
    
    while (true)
        esp_1 = &esp_1[0x11]
        int32_t var_10_2
        
        if ((*(*sub_41a0f4(arg1, edi_4) + 0x34))() != *(eax_24 + 0xc))
            void* eax_33
            int32_t ecx_3
            eax_33, ecx_3 = sub_41a0f4(arg1, edi_4)
            *(eax_24 + 0xc)
            ecx_3.b = 1
            sub_44f914(eax_33)
            var_10_2 = 0
        else
            var_10_2 = *(sub_41a0f4(arg1, edi_4) + 0x34)
        
        if (var_10_2 != 0)
            int32_t* eax_35
            int32_t ecx_4
            eax_35, ecx_4 = sub_41a0f4(arg1, edi_4)
            ecx_4.b = 1
            int32_t eax_36 = sub_44f944(eax_35, *(eax_24 + 8), ecx_4)
            
            if (eax_36 == 0)
                eax_36 = sub_44f944(sub_41a0f4(arg1, edi_4), *(eax_24 + 0xc), 0)
            
            void* edx_24 = *(*data_4ac4b8 + 0x6c)
            
            if (edx_24 != 0)
                if (eax_36 == 0)
                    eax_36 = *(edx_24 + 0x160)
                
                data_4ac4b8
                
                if ((*(edx_24 + 0x270) & 8) == 0)
                    ebp_1 = sub_4773c4(*data_4ac2fc, eax_36)
                else
                    *data_4ac2fc
                    sub_47744c()
            
            break
        
        edi_4 += 1
        int32_t temp13_1 = ebx_9
        ebx_9 -= 1
        
        if (temp13_1 == 1)
            goto label_450dab

label_450dc6:
esp_1[2]
fsbase->NtTib.ExceptionList = *esp_1
esp_1[2] = 0x450ddf
sub_404b88(&ebp_1[-0xc])
return &ebp_1[-0xc]
