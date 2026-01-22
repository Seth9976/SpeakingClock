// 函数: sub_4030d0
// 地址: 0x4030d0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 == arg2)
    return 

if (arg3 u> 0x20)
    if (arg3 s> 0x20)
        if (arg1 u> arg2)
        label_40312d:
            long double x87_r7_2 = float.t(*arg1)
            long double x87_r6_2 = float.t(*(arg3 + arg1 - 8))
            int64_t* i_2 = (arg2 & 0xfffffff8) + neg.d(arg2 + arg3 - 8) + 8
            int64_t* i
            
            do
                *(i_2 + arg2 + arg3 - 8) = int.q(float.t(*(i_2 + arg3 + arg1 - 8)))
                i = i_2
                i_2 = &i_2[1]
            while (i s< 0xfffffff8)
            *(arg2 + arg3 - 8) = int.q(x87_r6_2)
            *arg2 = int.q(x87_r7_2)
            return 
        
        void* edx_3 = arg2 - arg3
        arg2 = arg3 + edx_3
        
        if (arg1 u<= edx_3)
            goto label_40312d
        
        long double x87_r7_3 = float.t(*(arg3 - 8 + arg1))
        long double x87_r6_3 = float.t(*arg1)
        int64_t* i_3 = ((arg3 - 8 + arg2) & 0xfffffff8) - arg2
        int64_t* i_1
        
        do
            *(i_3 + arg2) = int.q(float.t(*(i_3 + arg1)))
            i_1 = i_3
            i_3 -= 8
        while (i_1 s> 8)
        *arg2 = int.q(x87_r6_3)
        *(arg3 - 8 + arg2) = int.q(x87_r7_3)
    
    return 

if (arg3 s<= 8)
    jump((&data_403128)[arg3 - 8])

long double x87_r7_1 = float.t(*(arg3 - 8 + arg1))
long double x87_r6_1 = float.t(*arg1)

if (arg3 - 8 s> 8)
    long double x87_r5_1 = float.t(arg1[1])
    
    if (arg3 - 8 s> 0x10)
        arg2[2] = int.q(float.t(arg1[2]))
    
    arg2[1] = int.q(x87_r5_1)

*arg2 = int.q(x87_r6_1)
*(arg3 - 8 + arg2) = int.q(x87_r7_1)
