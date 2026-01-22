// 函数: sub_43a530
// 地址: 0x43a530
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* hDC_2
int32_t* hDC = hDC_2
int32_t* result = arg1

if ((result[7].b & 2) == 0)
    result = arg1
    
    if (*(result + 0x19d) != 0)
        (*(*arg1 + 0x44))()
        HDC var_c_1 = GetDC(nullptr)
        int32_t* hDC_1 = &hDC
        int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
        TEB* fsbase
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        sub_42c7c4(arg1[0x64], hDC_1)
        int32_t esi
        esi.w = 0xffc5
        void var_1d
        sub_403e64(arg1, esi, &var_1d, 
            zx.d(*((zx.d(*(arg1 + 0x19f)) << 1) + &data_4aaf98)) | 0x440, ExceptionList, var_10, 
            hDC_1)
        sub_42c7c4(arg1[0x64], 0)
        fsbase->NtTib.ExceptionList = arg1
        __return_addr = sub_43a5e5
        hDC = hDC_1
        return ReleaseDC(nullptr, hDC)

return result
