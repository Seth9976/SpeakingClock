// 函数: sub_49c9e4
// 地址: 0x49c9e4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
uint32_t result
result.w = arg1[7].w & 9

if (0 == result.w)
    char eax_2 = (*(*arg1 + 0x12c))()
    char eax_5
    int32_t edx_2
    eax_5, edx_2 = sub_4944c8((*(*arg1 + 0x138))())
    
    if (eax_5 != 0 && eax_2 == 0)
        goto label_49ca62
    
    if (eax_2 == 0)
        if (arg1[0xbb] == 0)
            edx_2.b = 1
            arg1[0xbb] = sub_430618(sub_42a104+0x140, edx_2)
        
        void var_20
        
        if (arg2 != 0)
        label_49cb07:
            arg1[0x12]
            (*(*arg1[0xbb] + 0x40))()
            arg1[0x13]
            (*(*arg1[0xbb] + 0x34))()
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList
            
            if (eax_2 == 0 || *(arg1 + 0x25f) == 0)
                int32_t eax_51 = (*(*arg1[0xbb] + 0x20))(arg1[0x1c])
                ExceptionList = &var_20
                sub_406c1c((*(*arg1[0xbb] + 0x2c))(ExceptionList, eax_51), 0, 0)
                int32_t* var_44_4 = &var_20
                ExceptionList = (*(*arg1 + 0x138))(var_44_4)
                sub_494bac(var_44_4, sub_430bec(arg1[0xbb]), ExceptionList)
                sub_431d30(arg1[0xbb], 6)
                return sub_495bf4((*(*arg1 + 0x13c))(), arg1[0xbb])
            
            sub_40eb14(&arg1[0xbb])
            int32_t edx_12
            result, edx_12 = (*(*arg1 + 0x178))()
            
            if (result != 0)
                edx_12.b = 1
                int32_t* eax_33 = sub_430618(sub_42a104+0x140, edx_12)
                int32_t* var_40_3 = &var_4
                int32_t (* var_44_2)(void* arg1, void* arg2) = j_sub_40443c
                TEB* fsbase
                ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                arg1[0x12]
                (*(*eax_33 + 0x40))(ExceptionList, var_44_2, var_40_3)
                arg1[0x13]
                (*(*eax_33 + 0x34))(arg1)
                void var_38
                sub_406c38(0, 0, &var_38)
                int32_t* var_10_1 = nullptr
                (*(*arg1 + 0x44))(var_10_1, &var_38)
                void* var_c_1 = &var_20
                sub_430bec(var_10_1)
                (*(*arg1 + 0x180))()
                int32_t edx_18
                edx_18.b = 1
                int32_t* eax_42 = sub_430618(sub_42a104+0x140, edx_18)
                arg1[0xbb] = eax_42
                (*(*eax_42 + 8))()
                fsbase->NtTib.ExceptionList = arg1
                __return_addr = &data_49cc6e
                return sub_403c68(var_10_1)
        else
            if (*((*(*arg1 + 0x138))() + 0x20) == 5)
                goto label_49cb07
            
            sub_406c1c((*(*arg1[0xbb] + 0x2c))(&var_20, (*(*arg1[0xbb] + 0x20))()), 0, 0)
            void* var_40_2 = &var_20
            (*(*arg1 + 0x44))(var_40_2)
            void var_30
            result = sub_490260(&var_30, var_40_2)
            
            if (result.b == 0)
                goto label_49cb07
    else
        (*(*arg1 + 0x13c))()
    label_49ca62:
        
        if (arg1[0xbb] != 0)
            sub_40eb14(&arg1[0xbb])
        
        result = arg1
        *(result + 0x264) = 1

return result
