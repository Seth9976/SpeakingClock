// 函数: sub_403578
// 地址: 0x403578
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg3:1.b = arg3.b

if (arg2 s>= 0x20)
    *arg1 = arg3
    arg1[1] = arg3
    arg1[2] = arg3
    arg1[3] = arg3
    long double x87_r7 = fconvert.t(*arg1)
    *(arg2 - 0x10 + arg1) = fconvert.d(x87_r7)
    *(arg2 - 0x10 + arg1 + 8) = fconvert.d(x87_r7)
    void* edx_1 = arg2 - 0x10 + (arg1 & 7) - 8
    void* eax_1 = arg1 - ((arg1 & 7) - 8) + edx_1
    int32_t i_1 = neg.d(edx_1)
    int32_t i
    
    do
        *(i_1 + eax_1) = fconvert.d(x87_r7)
        *(i_1 + eax_1 + 8) = fconvert.d(x87_r7)
        i = i_1
        i_1 += 0x10
    while (i s< 0xfffffff0)
    return 

if (arg2 s<= 0)
    return 

*(arg2 + arg1 - 1) = arg3.b

switch (neg.d(arg2 & 0xfffffffe))
    case 0x7fffffe2
        arg1[0xe] = arg3
    label_4035d8:
        arg1[0xd] = arg3
    label_4035dc:
        arg1[0xc] = arg3
    label_4035e0:
        arg1[0xb] = arg3
    label_4035e4:
        arg1[0xa] = arg3
    label_4035e8:
        arg1[9] = arg3
    label_4035ec:
        arg1[8] = arg3
    label_4035f0:
        arg1[7] = arg3
    label_4035f4:
        arg1[6] = arg3
    label_4035f8:
        arg1[5] = arg3
    label_4035fc:
        arg1[4] = arg3
        arg1[3] = arg3
        arg1[2] = arg3
    case 0x7fffffe4
        goto label_4035d8
    case 0x7fffffe6
        goto label_4035dc
    case 0x7fffffe8
        goto label_4035e0
    case 0x7fffffea
        goto label_4035e4
    case 0x7fffffec
        goto label_4035e8
    case 0x7fffffee
        goto label_4035ec
    case 0x7ffffff0
        goto label_4035f0
    case 0x7ffffff2
        goto label_4035f4
    case 0x7ffffff4
        goto label_4035f8
    case 0x7ffffff6
        goto label_4035fc
    case 0x7ffffff8
        arg1[3] = arg3
        arg1[2] = arg3
    case 0x7ffffffa
        arg1[2] = arg3

arg1[1] = arg3
*arg1 = arg3
