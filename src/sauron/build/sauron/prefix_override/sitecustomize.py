import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/notthecoolkid/mrt_ws/src/sauron/install/sauron'
