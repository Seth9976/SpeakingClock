// 函数: sub_49bf78
// 地址: 0x49bf78
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
char eax_1 = (*(*arg1 + 0x12c))()
void* result
int32_t edx_1
result, edx_1 = sub_499990(arg1)

if (result.b != 0 && eax_1 == 0)
    goto label_49bfc8

if (eax_1 == 0)
    if (arg1[0xbb] == 0)
        edx_1.b = 1
        arg1[0xbb] = sub_430618(sub_42a104+0x140, edx_1)
    
    if (arg2 == 0)
        void var_1c
        sub_406c1c((*(*arg1[0xbb] + 0x2c))(&var_1c, (*(*arg1[0xbb] + 0x20))()), 0, 0)
        RECT* var_44_2 = &var_1c
        (*(*arg1 + 0x44))(var_44_2)
        void var_2c
        result = sub_490260(&var_2c, var_44_2)
    
    if (arg2 != 0 || result.b == 0)
        arg1[0x12]
        (*(*arg1[0xbb] + 0x40))()
        arg1[0x13]
        (*(*arg1[0xbb] + 0x34))()
        int32_t edi
        edi.w = 0x20
        char eax_16
        
        if ((*(*data_4ac21c + 0x3c) & 1) != 0)
            eax_16, ebp_1 = sub_48aff4()
        
        if ((*(*data_4ac21c + 0x3c) & 1) == 0 || eax_16 u>= 9)
            edi.w = 0x1020
        
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList
        
        if (eax_1 == 0 || *(arg1 + 0x25f) == 0)
            int32_t* ebx_3 = arg1[0x9a]
            int32_t var_48_3 = 0
            ExceptionList = nullptr
            sub_406c1c(
                (*(*arg1[0xbb] + 0x2c))(&ebp_1[-6], 
                    (*(*arg1[0xbb] + 0x20))(arg1[0x9b], arg1[0x9c], ExceptionList, var_48_3, edi)), 
                0, 0)
            void* var_44_6 = &ebp_1[-6]
            sub_430bec(arg1[0xbb])
            result = (*(*ebx_3 + 0x78))()
        else
            sub_403c68(arg1[0xbb])
            arg1[0xbb] = 0
            int32_t edx_9
            result, edx_9 = (*(*arg1 + 0x178))()
            
            if (result != 0)
                edx_9.b = 1
                ebp_1[-2] = sub_430618(sub_42a104+0x140, edx_9)
                int32_t (* var_48_2)(void* arg1, void* arg2) = j_sub_40443c
                TEB* fsbase
                ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                arg1[0x12]
                (*(*ebp_1[-2] + 0x40))(ExceptionList, var_48_2, ebp_1)
                arg1[0x13]
                (*(*ebp_1[-2] + 0x34))()
                sub_406c38(0, 0, &ebp_1[-0xc])
                (*(*arg1 + 0x44))(0, &ebp_1[-0xc])
                void* var_58 = &ebp_1[-6]
                sub_430bec(ebp_1[-2])
                (*(*arg1 + 0x180))()
                int32_t edx_16
                edx_16.b = 1
                int32_t* eax_28 = sub_430618(sub_42a104+0x140, edx_16)
                arg1[0xbb] = eax_28
                ebp_1[-2]
                (*(*eax_28 + 8))()
                fsbase->NtTib.ExceptionList = 0
                ExceptionList = &data_49c1b9
                return sub_403c68(ebp_1[-2])
else
    (*(*arg1 + 0x13c))()
    result = sub_495bbc()
label_49bfc8:
    
    if (arg1[0xbb] != 0)
        result = sub_40eb14(&arg1[0xbb])
    
    arg1[0x99].b = 1

*ebp_1
return result
