// 函数: sub_45de90
// 地址: 0x45de90
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
int64_t* Flags = nullptr
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(data_4ac4e0 + 0xc) != 0)
    if (arg1[0x6f] != 0)
        sub_474564(*data_4ac4b8, &Flags)
        int64_t* var_8 = Flags
        int32_t cchCount1 = arg1[0x6f]
        
        if (cchCount1 != 0)
            cchCount1 = *(cchCount1 - 4)
        
        int64_t* cchCount2 = var_8
        
        if (cchCount2 != 0)
            cchCount2 = *(cchCount2 - 4)
        
        char* lpString2 = sub_405018(var_8)
        esp = &ExceptionList
        
        if (CompareStringA(0x400, 1, sub_405018(arg1[0x6f]), cchCount1, lpString2, cchCount2) != 2)
            int32_t* eax_11
            eax_11, ebp_1 = sub_474364(*data_4ac4b8)
            esp = &var_8
            
            if ((*(*eax_11 + 0x14))() != 0)
                HKL hkl = *(*data_4ac4b8 + 0x3c)
                
                if (arg1[0x6e].b != 0)
                    int32_t* eax_17
                    eax_17, ebp_1 = sub_474364(*data_4ac4b8)
                    arg1[0x6f]
                    
                    if ((*(*eax_17 + 0x54))() s>= 0)
                        int32_t* eax_21
                        eax_21, ebp_1 = sub_474364(*data_4ac4b8)
                        hkl = (*(*eax_21 + 0x18))()
                
                Flags = 1
                ActivateKeyboardLayout(hkl, Flags)
                esp = &var_8
    
    sub_464fac(sub_45f888(arg1), zx.d(arg1[0x6e].b))

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_45dfb6
sub_404b88(&ebp_1[-2])
return &ebp_1[-2]
