from datetime import datetime, timezone, timedelta

tz=timezone(timedelta(hours=0))
now=datetime.now(tz)
print(str(now)[:10])