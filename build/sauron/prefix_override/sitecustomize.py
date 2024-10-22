import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/notthecoolkid/mrtx/mrt_ws/install/sauron'
