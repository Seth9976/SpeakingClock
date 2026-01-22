// 函数: sub_41be7c
// 地址: 0x41be7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
int64_t* var_24 = nullptr
int64_t* var_1c = nullptr
int64_t* var_18 = nullptr
void* var_8 = nullptr
char* ebx_1 = arg2
int32_t* var_34 = &var_4
int32_t (* var_38)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_41b378(arg1)
int32_t* var_40 = &var_4
int32_t (* var_44)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x44))(ExceptionList, var_44, var_40, ExceptionList_1, var_38, var_34)

if (ebx_1 != 0)
    sub_41c0a8(arg1, &var_18)
    
    if (sub_408dcc(var_18, sub_41c017+5) != 0)
        void* (__convention("regparm")* var_14_1)(char* arg1, char* arg2)
        
        if (*(data_4ac4e0 + 0xc) != 0)
            var_14_1 = sub_40dce0
        else
            var_14_1 = sub_409e38
        
        sub_41c0a8(arg1, &var_1c)
        int64_t* eax_11 = var_1c
        
        if (eax_11 != 0)
            eax_11 = *(eax_11 - 4)
        
        while (*ebx_1 != 0)
            int64_t* esi_2 = ebx_1
            sub_41c0a8(arg1, &var_24)
            int32_t eax_17 = var_14_1()
            
            while (*ebx_1 != 0)
                if (eax_17 == ebx_1)
                    break
                
                ebx_1 = &ebx_1[1]
            
            sub_404c78(&var_8, esi_2, ebx_1 - esi_2)
            (*(*arg1 + 0x38))()
            
            if (eax_17 == ebx_1)
                ebx_1 += eax_11
    else
        while (*ebx_1 != 0)
            char* esi_1 = ebx_1
            
            while (true)
                char eax_5 = *ebx_1
                
                if (eax_5 == 0)
                    break
                
                if (eax_5 == 0xa)
                    break
                
                if (eax_5 == 0xd)
                    break
                
                ebx_1 = &ebx_1[1]
            
            sub_404c78(&var_8, esi_1, ebx_1 - esi_1)
            (*(*arg1 + 0x38))()
            
            if (*ebx_1 == 0xd)
                ebx_1 = &ebx_1[1]
            
            if (*ebx_1 == 0xa)
                ebx_1 = &ebx_1[1]

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_41bfda
return sub_41b434(arg1)
