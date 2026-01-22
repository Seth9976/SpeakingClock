// 函数: sub_43f3f8
// 地址: 0x43f3f8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t var_c = 0
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char eax = *(arg1 + 0x1f)

if (arg2 != eax)
    HDC (__stdcall* edi_1)(PSTR pwszDriver, PSTR pwszDevice, PSTR pszPort, DEVMODEA* pdm) = nullptr
    
    if (arg2 u< 1)
        ebp_1 = sub_43f528(arg1, 0)
        int32_t* eax_2 = *(arg1 + 4)
        
        if (eax_2 != 0)
            sub_42c7c4(eax_2, 0)
        
        DeleteDC(*(arg1 + 0x20))
        esp = &ExceptionList
        *(arg1 + 0x20) = 0
        goto label_43f48d
    
    if (arg2 != 1)
        if (arg2 == 2)
            int32_t* eax_4 = *(arg1 + 4)
            
            if (eax_4 != 0)
                sub_42c7c4(eax_4, 0)
            
            HDC hdc = *(arg1 + 0x20)
            
            if (hdc != 0)
                DeleteDC(hdc)
                esp = &ExceptionList
            
            edi_1 = CreateDCA
        
        goto label_43f48d
    
    if (eax != 2)
        edi_1 = CreateICA
    label_43f48d:
        
        if (edi_1 != 0)
            int32_t eax_6
            int32_t edx_1
            eax_6, edx_1 = sub_43f980(arg1)
            int32_t var_28_3 = eax_6
            int32_t* eax_8
            eax_8, ebp_1 = sub_43f998(arg1, edx_1)
            ebp_1[-1] = (*(*eax_8 + 0x18))()
            int32_t pdm = *(arg1 + 0x24)
            int32_t pszPort = sub_405018(*(ebp_1[-1] + 0xc))
            int32_t pwszDevice = sub_405018(*(ebp_1[-1] + 8))
            void var_8
            esp = &var_8
            *(arg1 + 0x20) = edi_1(sub_405018(*(ebp_1[-1] + 4)), pwszDevice, pszPort, pdm)
            
            if (*(arg1 + 0x20) == 0)
                sub_406a30(data_4ac39c, &ebp_1[-2])
                sub_43efe8(ebp_1[-2])
            
            int32_t* eax_20 = *(arg1 + 4)
            
            if (eax_20 != 0)
                sub_42c7c4(eax_20, *(arg1 + 0x20))
        
        *(arg1 + 0x1f) = arg2

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_43f51e
sub_404b88(&ebp_1[-2])
return &ebp_1[-2]
