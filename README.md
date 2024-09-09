# websocket-example

websocket-example is basic client server communication using cpp client and python based server. Client continuously sending random number to server on each second. Server is showing these number to any UI 
Client is using following lib for websocket client:

https://github.com/dhbaird/easywsclient

## Build

Use make command to build client

```bash
make
```

## Usage
In first terminal execute server

```python

# Execute websocket server
python3 server.py
```

In second terminal execute build client
```
# Execute client  (in other terminal)
./client

```

After client execute, we see number is listing on server terminal

## Clean
```
make clean
```
