# these types are forced to opaque
fqlist = [
    'orxSTRUCTURE',
    'orxDISPLAY_MESH',

    # will have rw properties but no constructors (see fieldsdict.py)
    'orxCHARACTER_MAP',
    'orxSOUND_STREAM_PACKET',
    'orxSOUND_STREAM_INFO',
    'orxCLOCK_INFO', # important!!!! there's an api to probe orxCLOCK's address from the pointer of this type
]